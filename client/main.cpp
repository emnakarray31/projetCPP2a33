#include <QApplication>
#include <QMessageBox>
#include "mainwindow.h"
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Initialiser la connexion à la base de données
    Connection connection;
    bool isConnected = connection.createconnect();

    // Vérification de la connexion
    if (!isConnected) {
        QMessageBox::critical(nullptr, QObject::tr("Database Error"),
                              QObject::tr("Failed to connect to the database. "
                                          "The application will now close."));
        return -1; // Arrêter le programme si la connexion échoue
    }

    MainWindow mainWindow;
    mainWindow.show(); // Afficher la fenêtre principale si la connexion réussit

    return app.exec(); // Exécuter l'application Qt
}
