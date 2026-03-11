#pragma once

void Print(char* String, int Size);

/*
문자열 길이 세는 함수
param : String - 문자열
Size : 최대 배열 크기
*/
int Length(char* String, int Size);

void Replace(char* String, int Size, char FindCharacter, char ReplaceCharacter);

int IndexOf(char* String, int Size, char FindCharacter);