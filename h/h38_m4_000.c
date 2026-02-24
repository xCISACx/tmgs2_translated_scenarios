section "h38_m4_000"{
    if (Parameter_GetCh1Param(4, 130) >= 4){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_01F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("H3804000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝!\nDid you come here to cheer me on?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H3804000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Isn't that obvious?\nOf course I'd come.");
        Character_BlinkStart(4, 3, (#1));
        Voice_PlayVoice("H3804000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I'd be an idiot if I missed seeing\nyou at this event.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_BlinkStart(4, 0, (#1));
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 5);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H3804000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Anyway!\nDo your best, I'll be cheering you\non!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, thanks!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
