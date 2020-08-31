#include"walletManager.h"

Wallet* createWallet(int amount) {
    Wallet* sept = new Wallet;
    sept->septims = amount;
    return sept;
}

void destroyWallet(Wallet* wallet) {
    delete wallet;
}

Wallet* createWallets(int amount) {
    Wallet* wallet = new Wallet[amount];
    return wallet;
}

void destroyWallets(Wallet* wallet) {
    delete[] wallet;
}

//int main() {
//    Wallet* wallet= createWallet(10);
//    std::cout<< "I've got "<< wallet->septims<< " septims in the wallet."<< std::endl;
//    destroyWallet(wallet);
//
//    int amount= 5;
//    Wallet* wallets= createWallets(amount);
//    for (int i = 0; i < amount; i++) {
//        wallets[i].septims= i * i;
//        std::cout << i << " wallet: " << wallets[i].septims << " septims." << std::endl;
//    }
//    destroyWallets(wallets);
//    return 0;
//}
