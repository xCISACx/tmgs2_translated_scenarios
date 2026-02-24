section "j05_m7_000"{
    int var0;
    var0 = Date_Get_Date_Place();
    if (var0 == 1){
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0507000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I recommend the Waterfront Park.\nHow does that sound?");
        }
    else if (var0 == 4){
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0507000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Do you want to go to the Sky Garden?\nIt seems like it will be enjoyable\nif I am with you.");
        }
    else if (var0 == 5){
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0507000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I heard that there is a Fireworks\nFestival.\nI want to see the fireworks close by\nwith you.");
        }
    else if (var0 == 6){
        if (Date_ChkDateOpenOmit(15) == 1){
            Voice_PlayVoice("J0507000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Do you want to go to the beach?");
            }
        else if (Date_ChkDateOpenOmit(16) == 1){
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("J0507000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Do you want to go for a walk\ntogether at the beach?\nThe beach isn't bad, even in Winter.");
            }
        }
    else if (var0 == 8){
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0507000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I heard that the avenue of cherry\nblossom trees are in full bloom.\nSo do you want to go watch the\nflowers together?");
        }
    else if (var0 == 16){
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0507000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Let us go to the bowling alley.\nIt will surely be enjoyable.");
        }
    else if (var0 == 20){
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0507000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Do you want to go Fall leaf viewing?\nHabataki Mountain during this season\nis beautiful.");
        }
    }
