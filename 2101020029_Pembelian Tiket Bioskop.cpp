#include <iostream>
using namespace std;

const int baris = 10;			   
const int kolom = 10;		   
double price;
int total = 0;
int seat = 100;
int seat2 = 0;
int Quit = 1;

int show_menu()
{
	int MenuChoice;
		cout << endl << endl;
		cout << " \tMAIN MENU\n";
		cout << " 1. List Harga Kursi.\n";
		cout << " 2. Beli Tiket.\n";
		cout << " 3. Keluar.\n";
		cout << "___\n\n";
		cout << "Masukkan Pilihan Anda: ";
		cin >> MenuChoice;
		cout << endl << endl;
	return MenuChoice;
}

int main ()
{

    const int Num_Rows = 10;
    int price [Num_Rows];
    int baris2, kolom2, total, cost;
    int a;
    
    cout << "SELAMAT DATANG DI BIOSKOP KAMI";
    cout << endl << endl;

    for (int count = 0; count < baris; count++)
	{
		cout << "Harga Kursi Setiap Baris " << (count + 1) << ": ";
		cin >> price [count];
	}
	
	int choice;
	 while(choice != 3)
     {
	    choice = show_menu();
	    switch (choice) {
	        case 1:
	            cout << "List Harga Kursi\n\n";
				for (int count = 0; count < baris; count++)
				{
					cout << "Harga Untuk Baris" << (count + 1) << ": ";
					cout << price [count] << endl;
				}
				break;
			
			case 2:
                cout << "Beli Tiket\n\n";
                while (Quit == 1) 
                { 
                    cout << "Pilih Baris Kursi yang Anda Inginkan: ";
                    cin >> baris2;
                    cout << "Pilih Kolom Kursi yang Anda Inginkan: ";
                    cin >> kolom2;
                    cost = price [baris2] + 0;
                    total = total + cost;
                    cout << "Tiket Seharga: " << cost << endl;
                    cout << "Konfirmasi Pembelian? Enter (1 = IYA / 2 = TIDAK)";
                    cin >> a;
                    seat = seat - a;
                    seat2 += a;
                        
                    if (a == 1)
                    { 
                        cout << "Pembelian Tiket Anda Telah Terkonfirmasi." << endl;
                        cout << "Apakah Anda Ingin Membeli Kursi Yang Lain? (1 = IYA / 2 = TIDAK)";
                        cout << endl;
                        cin >> Quit;
                    }
                    else if (a == 2)
                    {
                        cout << "Apakah Anda Ingin Melihat Kursi Yang Lain? (1 = IYA / 2 = TIDAK)";
                        cout << endl;
                        cin >> Quit;
                    }
                            
                }
                break;
			
            case 3:
                cout << "quit\n";
                break;
        }
	};

}