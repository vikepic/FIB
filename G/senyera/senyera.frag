#version 330 core

in vec4 frontColor;
//tauler de 8 x 8 cel·les
//fila 0
//1/8 = 0.125
//0 - 0.125 black
//0.125 - 0.25 white
//...
//0.875 - 1 white
in vec2 vtexCoord;
out vec4 fragColor;

void main()
{
  vec2 board = vtexCoord * 9;
  int boardX = int(board.x);
  int boardY = int(board.y);
  if(boardX % 2 == 1)
    fragColor = vec4(1.0, 0.0, 0.0, 1.0);
  else
    fragColor = vec4(1.0, 1.0, 0.0, 1.0);
}
