#include <iostream>
#include <windows.h>
#include <wincred.h>
#include <string>

void RetrieveChromePasswords(){
 CREDIENTIALW* cred;
DWORD count;


if (!CredEnumerateW(L"ChromeSavedPasswords",0,&creds,&count)){
   std::cout << "Couldn't retrieve chrome passwords ):";

for (DWORD i = 0;i < count;i++){

  std::wstring url = creds[i].targetName
        std::wstring username = creds[i].UserName;
        std::wstring password(creds[i].CredentialBlob, creds[i].CredentialBlobSize / sizeof(wchar_t));
        std::wcout << "URL" << url;
        std::wcout << "Username" << username;
        std::wcout << "Password" << password

}
}
}
int main(int argc,char** argv){
RetrieveChromePasswords();
 
  return 0;
}
