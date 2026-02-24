section "j05_m6_000"{
    int var0;
    var0 = Date_Get_Date_Place();
    if (var0 == 0){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0506000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "So, let's go shopping at the\nshopping mall.");
        }
    else if (var0 == 1){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0506000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "So, let's go to the Waterfront Park.");
        }
    else if (var0 == 2){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0506000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Hey, let's go to the Aquarium.\nEver since I saw that special\nfeature in a magazine, it's been on\nmy mind.");
        }
    else if (var0 == 3){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0506000_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Apparently, there's something on at\nthe Event Hall.\nDo you want to go?");
        }
    else if (var0 == 4){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0506000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "So, do you want to go to the Sky\nGarden?");
        }
    else if (var0 == 5){
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("J0506000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Let's go and see the fireworks.\nWhen you think of Summer, you think\nof fireworks, right?");
        }
    else if (var0 == 6){
        if (Date_ChkDateOpenOmit(15) == 1){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("J0506000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "So, do you want to go to the beach?");
            }
        else if (Date_ChkDateOpenOmit(16) == 1){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("J0506000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's a bit cold...\nbut do you want to go to the beach?");
            }
        }
    else if (var0 == 7){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0506000_F00800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Do you want to go shopping at Park\nAvenue?");
        }
    else if (var0 == 8){
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0506000_F00900", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Let's go to the Forest Park.\nWe should relax once in a while.");
        }
    else if (var0 == 8){
        if (Date_ChkDateOpenOmit(19) == 1){
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("J0506000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, let's go flower viewing!\nThe cherry blossoms will surely be\npretty.");
            }
        }
    else if (var0 == 9){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0506000_F01100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Do you want to go to the Botanical\nGarden?");
        }
    else if (var0 == 10){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0506000_F01200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "So, do you want to go to the Museum?");
        }
    else if (var0 == 11){
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("J0506000_F01300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "So, let's go ice skating.\nIt'll definitely be fun!");
        }
    else if (var0 == 12){
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0506000_F01400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "So, let's go to the pool!");
        }
    else if (var0 == 13){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0506000_F01500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "So, let's go to the Flea Market and\nlook for interesting stuff.");
        }
    else if (var0 == 14){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0506000_F01600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Do you want to go shopping at the\nshopping district?\nWe can just take a stroll there, if\nyou like.");
        }
    else if (var0 == 15){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0506000_F01700", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I've got some tickets, so do you\nwant to go to the Live House?");
        }
    else if (var0 == 16){
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0506000_F01800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "For some reason, I want to go\nbowling all of a sudden.\nLet's go!");
        }
    else if (var0 == 17){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0506000_F01900", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Do you want to go to the arcade?\nI'll show you my skills!");
        }
    else if (var0 == 18){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0506000_F02000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Do you want to go to karaoke?\nFor some reason, I feel like singing\nmy heart out.");
        }
    else if (var0 == 19){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0506000_F02100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "So, let's go and see a movie.");
        }
    else if (var0 == 20){
        if (Date_ChkDateOpenOmit(61) == 1){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("J0506000_F02200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Do you want to go to Habataki\nMountain?\nI heard that it's the best time to\nsee the Autumn leaves.");
            }
        else if (Date_ChkDateOpenOmit(62) == 1){
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("J0506000_F02300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Don't you want to see me ski?\nLet's go skiing together.");
            }
        }
    else if (var0 == 21){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0506000_F02400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Do you want to go to the zoo?");
        }
    else if (var0 == 22){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0506000_F02500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Do you want to go to the castle to\nget a change of mood?");
        }
    else if (var0 == 23){
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("J0506000_F02600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "So, let's go to the Amusement Park!\nI want to make a huge racket!");
        }
    else if (var0 == 24){
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0506000_F02700", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "So...\nDo you want to come over to my\nplace?\nI mean I want you to come over!");
        }
    }
