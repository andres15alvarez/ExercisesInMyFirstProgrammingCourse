// MPersona.cpp

#include "MPersona.h"
MPersona :: MPersona(){}
MPersona :: MPersona(string ced,string nomb,string d,
                     string t,char sex,char e,int ed)
{  cedula = ced;
   nombre = nomb;
   dir = d;
   tlf = t;
   sexo = sex;
   edocivil = e;
   edad = ed;
}
void MPersona :: SetCedula(string ced)
{   cedula = ced;
}
void MPersona :: SetNombre(string nomb)
{   nombre = nomb;
}
void MPersona :: SetDir(string d)
{   dir = d;
}  
void MPersona :: SetTlf(string t)
{   tlf = t;
}  
void MPersona :: SetSexo(char sex)
{   sexo = sex;
}  
void MPersona :: SetEdoCivil(char e)
{   edocivil = e;
}  
void MPersona :: SetEdad(int ed)
{   edad = ed;
}  
string MPersona :: GetCedula()
{   return cedula;
}     
string MPersona :: GetNombre()
{   return nombre;
}        
string MPersona :: GetDir()
{   return dir;
}        
string MPersona :: GetTlf()
{   return tlf;
}        
char MPersona :: GetSexo()
{   return sexo;
}      
char MPersona :: GetEdoCivil()
{   return edocivil;
}      
int MPersona :: GetEdad()
{   return edad;
}
