section "j05_m1_000"{
    int var0;
    var0 = Date_Get_Date_Place();
    if (var0 == 0){
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("J0501000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Shopping\nMall?\nThere are some things that I wanna\nsee.");
        }
    else if (var0 == 1){
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("J0501000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Waterfront\nPark?\nThe view of the ocean is really\npretty from there.");
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("J0501000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Aquarium?\nI like the Aquarium.");
        }
    else if (var0 == 3){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0501000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Event Hall?\nApparently, they've got some\ninteresting stuff.");
        }
    else if (var0 == 4){
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0501000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Sky Garden?\n...\nI mean that place that \"seems\" like\na Sky Garden, right?");
        }
    else if (var0 == 5){
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("J0501000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go to the Fireworks Festival.\nIt's only on once a year.");
        }
    else if (var0 == 6){
        if (Date_ChkDateOpenOmit(15) == 1){
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("J0501000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Let's go to the beach. It's summer.\nI have to take a break from work\nevery now and then.");
            }
        else if (Date_ChkDateOpenOmit(16) == 1){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("J0501000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Do you wanna go to the beach?\nIt'll be a little cold, though.");
            }
        }
    else if (var0 == 7){
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("J0501000_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to Park Avenue?\nI gotta buy some things for\nSangosho.\nHelp me out.");
        }
    else if (var0 == 8){
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("J0501000_A00900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "There are times when I wanna just do\nnothing.\nI learnt it from you.\nSo do you wanna go to the Forest\nPark?");
        }
    else if (var0 == 8){
        if (Date_ChkDateOpenOmit(19) == 1){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("J0501000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Let's go flower watching.\nOtherwise it'd be over before we\nknow it.");
            }
        }
    else if (var0 == 9){
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0501000_A01100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Botanical\nGarden?\nI don't really like it there, but\nfor some reason, I feel like going.");
        }
    else if (var0 == 10){
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0501000_A01200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Museum?\nWe should occasionally go to places\nwhere we can learn things, right?");
        }
    else if (var0 == 11){
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("J0501000_A01300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go ice skating, since it's\nwinter.");
        }
    else if (var0 == 12){
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0501000_A01400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go to the Indoor Pool.\nIf I don't go swimming now and then,\nmy body will weaken.");
        }
    else if (var0 == 13){
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("J0501000_A01500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You wanna go to the Flea Market?\nThey have relatively good finds and\nstuff.");
        }
    else if (var0 == 14){
        Character_BlinkStart(1, 3, (#1));
        Voice_PlayVoice("J0501000_A01600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "There are a few things I wanna see\nat the shopping district, so do you\nwanna go together?");
        }
    else if (var0 == 15){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0501000_A01700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Live House?\nI heard from customers at Sangosho\nthat they've got a good show on.");
        }
    else if (var0 == 16){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("J0501000_A01800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Wanna go bowling?\nI kinda feel like it.");
        }
    else if (var0 == 17){
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0501000_A01900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the arcade?\nI kinda feel like it.");
        }
    else if (var0 == 18){
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0501000_A02000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go to karaoke.\nYou like that, right?");
        }
    else if (var0 == 19){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0501000_A02100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You wanna go watch a movie?\nI heard it from the customers at\nSangosho, but apparently they're\nshowing good stuff.");
        }
    else if (var0 == 20){
        if (Date_ChkDateOpenOmit(61) == 1){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("J0501000_A02200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Do you wanna go to Habataki\nMountain?");
            }
        else if (Date_ChkDateOpenOmit(62) == 1){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("J0501000_A02300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Let's go skiing. It's winter.\nSo it's not like we shouldn't go,\nright?");
            }
        }
    else if (var0 == 21){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("J0501000_A02400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go to the zoo.\nThere are times when you want to go\nsee your friends, right?");
        }
    else if (var0 == 22){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0501000_A02500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the castle?\nIt's a famous place.");
        }
    else if (var0 == 23){
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0501000_A02600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the amusement\npark?\nI mean, I got some tickets from the\ncustomers at Sangosho.");
        }
    else if (var0 == 24){
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 3, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("J0501000_A02700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna come to my place? ...\nWell it's actually Sangosho.");
        Character_ChFace(0, 0, 6);
        Voice_PlayVoice("J0501000_A02800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I don't mean that I want you to help\nout at Sangosho....\nJust letting you know.");
        }
    }
