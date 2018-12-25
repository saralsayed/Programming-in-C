void read_array(float *x, unsigned int n, char *name){
  unsigned int i;
  printf("\nGeben Sie die Werte das Arrays %s ein: \n\n",name);
  for(i=0;i<n;i++){
    printf("%s[%u] = ",name,i);
    scanf("%f",&x[i]);
  }
  return;
}
void print_array(float *x, unsigned int n, char *name){
  unsigned int i;
  printf("\nDas Array %s enthaelt folgende Eintraege: \n\n",name);
  for(i=0;i<n;i++) printf("%s[%u] = %f \n",name,i,x[i]);
  return;
}
void add_arrays(float a[], float b[], float c[], unsigned int n){
  unsigned int i;
  for(i=0;i<n;i++)
    c[i] = a[i]+b[i];
  return;
}

