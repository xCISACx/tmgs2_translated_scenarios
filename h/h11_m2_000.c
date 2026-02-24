section "h11_m2_000"{
    Background_Bg_GS2("BG_SC100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, I'll join the baseball club as\nthe manager!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SCA10_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("H1102000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Club President", "We have a group club practice every\n3rd Sunday of the month.\nYou must be present.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay, I got it.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
    if (Parameter_GetCh1Param(2, 25) == 1){
        Parameter_AddCh1Param(2, 86, 1);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 4);
        Character_Chara_GS2(2, "M2_15F", 0);
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I joined the Baseball Club.\nI'll do my best as the manager!");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H1102000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Welcome.");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I joined the Baseball Club.\nI'll do my best as the manager!");
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("H1102000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's quite tough being a manager.\nDon't give up halfway, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.\nI look forward to it,\n｛Shiba＊＊｝!");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H1102000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.");
            }
        else {
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I joined the Baseball Club.\nI'll do my best as the manager!");
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("H1102000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You're the manager...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Do you think that I can't do it?");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H1102000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No... That's... not it.\nYou should be fine.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really? Thank gosh...");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H1102000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It seems like I have to be more\nfired up than you...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1102000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Nothing....\nLet's do our best, together.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah! I look forward to it!");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
