// module string_fun.c
unsigned int cmp_negative = 0;  // program global definition
unsigned int cmp_positive = 1;  // program global definition
// program global function definition
unsigned int string_compare(char* s1,char* s2){
  // return 1 if s1=s2 and 0 if s1!=s2
  while(*s1!=0 && *s2!=0){
    if((*s1==0 && *s2!=0) || (*s1!=0 && *s2==0) || (*s1!=*s2)) return cmp_negative;
    s1++; s2++;
  }
  if(*s1!=0 || *s2!=0) return cmp_negative;
  else return cmp_positive;
}
