#version 330 core
layout (location = 0) in vec3 position;
layout (location = 1) in vec3 color;

out vec3 our_color;
out vec3 vertex_position;

uniform float x_offset;

void main() {
  gl_Position = vec4(position.x+x_offset, position.y, position.z, 1.0);
  our_color = color;
  vertex_position = position;
}
