class agb
{
    idd = 32154;
    name = "agb";
    movingEnable = false;
    enableSimulation = false;

    class controlsBackground
    {
        class RscTitleBackground : Life_RscText
        {
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            idc = -1;
            x = 0.0875;
            y = 0.06;
            w = 0.825;
            h = 0.04;
        };

        class RscBackground : Life_RscText
        {
            colorBackground[] = {0.31,0.31,0.31,0.5};
            idc = -1;
            x = 0.0875;
            y = 0.12;
            w = 0.825;
            h = 0.82;
        };

        class RscTitleText : Life_RscTitle
        {
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            text = "synced-gaming User-Agreement";
            x = 0.0875;
            y = 0.06;
            w = 0.825;
            h = 0.04;
            class Attributes
            {
                align = "center";
            };
        };

        class RsclolStatus : Life_RscStructuredText
        {
            idc = -1;
            colorBackground[] = {0, 0, 0, 0};
            sizeEx = 0.0001;
            text = "<t size = '0.8'>Mit dem Verbinden auf den Synced Gaming Takistan Conflict Server akzeptieren Sie die Regeln von Synced-Gaming.<br / ><br / >Jeglicher auf dem Synced-Gaming Takistan Conflict Server befindlicher Inhalt ist frei erfunden und hat keinerlei Parallele zu der realen Welt.<br / ><br / >Das Nachahmen verfassungsfeindlicher und/oder menschenrechtsverachtender Organisationen oder Gruppierungen ist verboten und wird nicht toleriert. <br / ><br / >Darunter zählen auch die Nutzung von diesen Organisationen zugehörigen Symbolen, Texten, Parolen, Verhaltensweisen, Gedanken oder sonstigen Materials.<br /><br / >Synced-Gaming übernimmt keine Haftung für das Verhalten der Nutzer untereinander.</t> <t font ='PuristaBold' size='0.9'><br / ><br / ><br / >Bei Zuwiderhandlung behält sich synced-gaming vor, Sanktionen oder Ausschlüsse von der Community zu verhängen.</t>";
            x = 0.1125;
            y = 0.16;
            w = 0.775;
            h = 0.66;
        };
    };

        class Controls
    {
        class naz : Life_RscButtonMenu
        {
            idc = -1;
            text = "Nicht Akzeptieren";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            onButtonClick = "closeDialog 0;";
            x = 0.1075;
            y = 0.88;
            w = 0.3;
            h = 0.04;
            class Attributes
            {
                align = "center";
            };
        };


        class az : Life_RscButtonMenu
        {
            idc = -1;
            text = "Akzeptieren";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            onButtonClick = "rulesok = true; closeDialog 0;";
            x = 0.5825;
            y = 0.88;
            w = 0.3;
            h = 0.04;
            class Attributes
            {
                align = "center";
            };
        };
    };
};