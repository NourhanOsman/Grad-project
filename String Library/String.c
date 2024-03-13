int strlen(const char *str)
{
     const char *s;
     for (s = str; *s; ++s);
    return s - str;
}



short int strcompare(const char* original, const char* desired, int size)
{
    short int flag=0;
    for (int i = 0; i < size; i++)
    {
        if( original[i]==desired[i] && original[i]!='/0' && desired[i]!='/0')
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }

    }
    return flag;
}
int strToInt(const char* str)
{
    int result = 0;
    int sign = 1;
    int i=0;

    while (str[i] != '\0')
    {
        if (str[i] == '-')
        {
           sign = -1;
        }

        else if (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0');
        }

        i++;
    }

    return sign*result;
}

void strDelete(char* str, int size)
{
    char* New = str + size;


    while (*New)
    {
        *str = *New;
        New++;
        str++;
    }
    *str = '\0';
}
