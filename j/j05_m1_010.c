section "j05_m1_010"{
    int var0;
    var0 = Date_Get_Date_Place();
    if (var0 == 0){
        Voice_PlayVoice("J0501010_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Shopping\nMall?\nThere are some things that I wanna\nsee.");
        }
    else if (var0 == 1){
        Voice_PlayVoice("J0501010_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Waterfront\nPark?\nThe view of the ocean is really\npretty from there.");
        }
    else if (var0 == 2){
        Voice_PlayVoice("J0501010_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Aquarium?\nI like the Aquarium.");
        }
    else if (var0 == 3){
        Voice_PlayVoice("J0501010_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Event Hall?\nApparently, they've got some\ninteresting stuff.");
        }
    else if (var0 == 4){
        Voice_PlayVoice("J0501010_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Sky Garden?\n...\nI mean that place that \"seems\" like\na Sky Garden, right?");
        }
    else if (var0 == 5){
        Voice_PlayVoice("J0501010_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go to the Fireworks Festival.\nIt's only on once a year.");
        }
    else if (var0 == 6){
        if (Date_ChkDateOpenOmit(15) == 1){
            Voice_PlayVoice("J0501010_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Let's go to the beach. It's summer.\nI have to take a break from work\nevery now and then.");
            }
        else if (Date_ChkDateOpenOmit(16) == 1){
            Voice_PlayVoice("J0501010_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Do you wanna go to the beach?\nIt'll be a little cold, though.");
            }
        }
    else if (var0 == 7){
        Voice_PlayVoice("J0501010_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to Park Avenue?\nI gotta buy some things for\nSangosho.\nHelp me out.");
        }
    else if (var0 == 8){
        Voice_PlayVoice("J0501010_A00900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "There are times when I wanna just do\nnothing.\nI learnt it from you.\nSo do you wanna go to the Forest\nPark?");
        }
    else if (var0 == 8){
        if (Date_ChkDateOpenOmit(19) == 1){
            Voice_PlayVoice("J0501010_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Let's go flower watching.\nOtherwise it'd be over before we\nknow it.");
            }
        }
    else if (var0 == 9){
        Voice_PlayVoice("J0501010_A01100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Botanical\nGarden?\nI don't really like it there, but\nfor some reason, I feel like going.");
        }
    else if (var0 == 10){
        Voice_PlayVoice("J0501010_A01200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Museum?\nWe should occasionally go to places\nwhere we can learn things, right?");
        }
    else if (var0 == 11){
        Voice_PlayVoice("J0501010_A01300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go ice skating, since it's\nwinter.");
        }
    else if (var0 == 12){
        Voice_PlayVoice("J0501010_A01400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go to the Indoor Pool.\nIf I don't go swimming now and then,\nmy body will weaken.");
        }
    else if (var0 == 13){
        Voice_PlayVoice("J0501010_A01500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You wanna go to the Flea Market?\nThey have relatively good finds and\nstuff.");
        }
    else if (var0 == 14){
        Voice_PlayVoice("J0501010_A01600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "There are a few things I wanna see\nat the shopping district, so do you\nwanna go together?");
        }
    else if (var0 == 15){
        Voice_PlayVoice("J0501010_A01700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the Live House?\nI heard from customers at Sangosho\nthat they've got a good show on.");
        }
    else if (var0 == 16){
        Voice_PlayVoice("J0501010_A01800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Wanna go bowling?\nI kinda feel like it.");
        }
    else if (var0 == 17){
        Voice_PlayVoice("J0501010_A01900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the arcade?\nI kinda feel like it.");
        }
    else if (var0 == 18){
        Voice_PlayVoice("J0501010_A02000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go to karaoke.\nYou like that, right?");
        }
    else if (var0 == 19){
        Voice_PlayVoice("J0501010_A02100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You wanna go watch a movie?\nI heard it from the customers at\nSangosho, but apparently they're\nshowing good stuff.");
        }
    else if (var0 == 20){
        if (Date_ChkDateOpenOmit(61) == 1){
            Voice_PlayVoice("J0501010_A02200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Do you wanna go to Habataki\nMountain?");
            }
        else if (Date_ChkDateOpenOmit(62) == 1){
            Voice_PlayVoice("J0501010_A02300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Let's go skiing. It's winter.\nSo it's not like we shouldn't go,\nright?");
            }
        }
    else if (var0 == 21){
        Voice_PlayVoice("J0501010_A02400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go to the zoo.\nThere are times when you want to go\nsee your friends, right?");
        }
    else if (var0 == 22){
        Voice_PlayVoice("J0501010_A02500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the castle?\nIt's a famous place.");
        }
    else if (var0 == 23){
        Voice_PlayVoice("J0501010_A02600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna go to the amusement\npark?\nI mean, I got some tickets from the\ncustomers at Sangosho.");
        }
    else if (var0 == 24){
        Voice_PlayVoice("J0501010_A02700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Do you wanna come to my place? ...\nWell it's actually Sangosho.");
        Voice_PlayVoice("J0501010_A02800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I don't mean that I want you to help\nout at Sangosho....\nJust letting you know.");
        }
    }
