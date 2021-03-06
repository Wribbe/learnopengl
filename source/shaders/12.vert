#version 330 core
layout (location = 0) in vec3 position;
layout (location = 1) in vec2 vertex_texture_coordinates;
layout (location = 2) in vec3 normal;

uniform mat4 model;
uniform mat4 view;
uniform mat4 perspective;

out vec3 Normal;
out vec3 fragment_position;
out vec2 texture_coordinates;

void main() {
  gl_Position = perspective * view * model * vec4(position, 1.0f);
  Normal = mat3(transpose(inverse(model))) * normal;
  fragment_position = vec3(model * vec4(position, 1.0f));
  texture_coordinates = vertex_texture_coordinates;
}
