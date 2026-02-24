section "j05_m3_010"{
    int var0;
    var0 = Date_Get_Date_Place();
    if (var0 == 0){
        Voice_PlayVoice("J0503010_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I was thinking of going to the\nShopping Mall.\nWill you accompany me?");
        }
    else if (var0 == 1){
        Voice_PlayVoice("J0503010_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "To go for a change of pace, do you\nwant to go to the Seaside Park?");
        }
    else if (var0 == 2){
        Voice_PlayVoice("J0503010_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Do you want to go to the Aquarium,\neven if it's just for recreation?");
        }
    else if (var0 == 3){
        Voice_PlayVoice("J0503010_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Apparently, there is a performance\nthat is much talked about at the\nEvent Hall.\nDo you want to go and watch it\ntogether?");
        }
    else if (var0 == 4){
        Voice_PlayVoice("J0503010_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "How does going to see the view at\nthe Sky Garden sound?");
        }
    else if (var0 == 5){
        Voice_PlayVoice("J0503010_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "There is a Fireworks Festival.\nIf it is okay with you, let us go\nand see it together.");
        }
    else if (var0 == 6){
        if (Date_ChkDateOpenOmit(15) == 1){
            Voice_PlayVoice("J0503010_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Going to the beach is standard when\nyou think of Summer, correct?\nDo you want to go?");
            }
        else if (Date_ChkDateOpenOmit(16) == 1){
            Voice_PlayVoice("J0503010_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nI am in the mood to go breathe in\nthe sea breeze.\nDo you want to go for a walk\ntogether at the beach?");
            }
        }
    else if (var0 == 7){
        Voice_PlayVoice("J0503010_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "There are various things that I want\nto see, so let's go to Park Avenue\ntogether.");
        }
    else if (var0 == 8){
        Voice_PlayVoice("J0503010_C00900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It will give us a change a of pace,\nso do you want to go to the Forest\nPark?");
        }
    else if (var0 == 8){
        if (Date_ChkDateOpenOmit(19) == 1){
            Voice_PlayVoice("J0503010_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It seems like the time has come when\nthe flowers are in bloom.\nDo you want to go flower viewing?");
            }
        }
    else if (var0 == 9){
        Voice_PlayVoice("J0503010_C01100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I want to immerse myself in cool\nair.\nSo do you want to go to the\nBotanical Garden with me?");
        }
    else if (var0 == 10){
        Voice_PlayVoice("J0503010_C01200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I plan on going to the Museum.\nHow about we go together?");
        }
    else if (var0 == 11){
        Voice_PlayVoice("J0503010_C01300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Do you want to go ice skating?");
        }
    else if (var0 == 12){
        Voice_PlayVoice("J0503010_C01400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I am thinking of going to the Indoor\nPool.\nWill you accompany me?");
        }
    else if (var0 == 13){
        Voice_PlayVoice("J0503010_C01500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Apparently there will be a Flea\nMarket.\nDo you want to go?");
        }
    else if (var0 == 14){
        Voice_PlayVoice("J0503010_C01600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "There are various things that I want\nto see, so let us go to the shopping\ndistrict together.");
        }
    else if (var0 == 15){
        Voice_PlayVoice("J0503010_C01700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Apparently, there is an interesting\nperformance on at the Live House.\nDo you want to go together?");
        }
    else if (var0 == 16){
        Voice_PlayVoice("J0503010_C01800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I was thinking of going bowling.\nHow would you like to go with me?");
        }
    else if (var0 == 17){
        Voice_PlayVoice("J0503010_C01900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Let us go to the arcade! ...\nTogether.");
        }
    else if (var0 == 18){
        Voice_PlayVoice("J0503010_C02000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I want to hear you sing.\nSo let's go to Karaoke BOX.");
        }
    else if (var0 == 19){
        Voice_PlayVoice("J0503010_C02100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "There is a movie that I am\ninterested in.\nIf it is alright with you, do you\nwant to go and watch it together?");
        }
    else if (var0 == 20){
        Character_ChFace(0, 0, 0);
        if (Date_ChkDateOpenOmit(61) == 1){
            Voice_PlayVoice("J0503010_C02200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Do you want to go to Habataki\nMountain?\nIt seems like it is the season where\nthe leaves are changing.");
            }
        else if (Date_ChkDateOpenOmit(62) == 1){
            Voice_PlayVoice("J0503010_C02300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Let us go skiing at Habataki\nMountain.");
            }
        }
    else if (var0 == 21){
        Voice_PlayVoice("J0503010_C02400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "If it is all right with you, let us\ngo to the zoo.");
        }
    else if (var0 == 22){
        Voice_PlayVoice("J0503010_C02500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I want to get a feel for what it\nwould be like to be the lord of a\ncastle.\nWill you accompany me?");
        }
    else if (var0 == 23){
        Voice_PlayVoice("J0503010_C02600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I want to go to the Amusement Park.\nIf it is all right with you, will\nyou come along, too?");
        }
    else if (var0 == 24){
        Voice_PlayVoice("J0503010_C02700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I...If it's all right with you,\numm...\nMy... room... rather! My house! ...\nWould you like to come to my house?");
        }
    }
