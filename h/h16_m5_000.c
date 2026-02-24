section "h16_m5_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        if (Parameter_GetCh1Param(5, 130) <= 3){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("H1605000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "They won. Isn't that great～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, it was worth cheering them on!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad they won...)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "They won, ｛Chris＊＊｝!\nAs expected of Hanegasaki Academy's\nBaseball Club!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1605000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nBut it's also because of the\nmanager, after all.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I didn't do anything.");
            Voice_PlayVoice("H1605000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "What are you saying?\nYou supported the players' hearts.\nThat's doing plenty.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!)");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        if (Parameter_GetCh1Param(5, 130) <= 3){
            Voice_PlayVoice("H1605000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... They lost.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1605000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Well, there's always next time.\nThis is also counted as experience,\nright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, right...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But it's still unfortunate...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "... They lost.");
            Voice_PlayVoice("H1605000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah. It was close.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H1605000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "But you don't have time to be down.\nDon't you have to think about what\nto do next?");
            Voice_PlayVoice("H1605000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You gotta do your best so that the\nreal games don't end up like this!");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Right. I'll do my best!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But that was unfortunate...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
