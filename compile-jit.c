#include "/dev/stdin"

// This is sorcery... this is witchcraft!
// To be used like this
/* gcc -o stdin stdin.c << WTF
pipe heredoc> #include <stdio.h>
pipe heredoc>
pipe heredoc> int main() {
pipe heredoc>   printf("Dennis, please forgive me...\n");
pipe heredoc>   return 0;
pipe heredoc> }
pipe heredoc> WTF
*/
