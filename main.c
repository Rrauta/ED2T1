#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // READ FILE TO CREATE NODES AND EVERYTHING
    printf("Hey There ED2 will be started here\n");
    
    FILE *fp;
    fp = fopen("berlin52.tsp", "r");
    
    //verifca erro na leitura do arquivo
    if(fp == NULL){
        printf("ERRO AO LER ARQUIVO");
        return 0;
    }
    char buffer[200],name[100],type[100], edge_weight_type[8];
    int dimension;
    
    fscanf(fp, "%s %s",buffer,name);
    //pegar toda a linha
    fscanf(fp, "%s %[^\n]",buffer,buffer);
    
    while(strcmp(buffer, "TYPE:") !=0){
        fscanf(fp, "%s%*c",buffer);
	}
	
    fscanf(fp, "%s%*c", type);
    fscanf(fp, "%s %d",buffer,&dimension);
    fscanf(fp, "%s %s",buffer,edge_weight_type);
    fscanf(fp, "%s",buffer);
    
    if(strcmp(edge_weight_type,"EUC_2D")!=0){
        printf("EDGE_WEIGHT_TYPE invalido!");
        return 1;
    }
   
    printf("%s %s %d %s\n",name,type, dimension, edge_weight_type);
    
    
    /*
    while(!feof(fp)){
        fgets(buffer,200,fp);
        //ler coordenadas
        
    }
    */
    
    // fecha arquivo
    fclose(fp);
    return 0;
}