section "h24_m2_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(2, "M2_01F", 0);
    if (Parameter_GetCh1Param(2, 130) <= 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝!\nWhat's up?");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("H2402000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nI came because I'm interested in\nLacrosse.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, it's really fun!\nEnjoy watching the game.\nOkay, ｛Shiba＊＊｝?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(2, 2, (#1));
        Character_BlinkStart(2, 0, (#1));
        Voice_PlayVoice("H2402000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I have to do my best!)");
        }
    else {
        Voice_PlayVoice("", 2, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝, you came?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H2402000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah....\nI came here to give you something to\nsupport you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "A sports drink? Wah, thanks!");
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H2402000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Good luck with the game.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I have to do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
