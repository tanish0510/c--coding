
    printf("enter the comtents you want to append:");
    gets(str);
    fputs(str,fp);

    
    printf("\nsuccesfully appended");
    fclose(fp);
  
    return 0;
}