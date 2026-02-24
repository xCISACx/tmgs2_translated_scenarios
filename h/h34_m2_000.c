section "h34_m2_000"{
    if (Parameter_GetCh1Param(2, 130) <= 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_01F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nWhat's up?");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("H3402000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nI was just around the area and I saw\nyou.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I see. Will you cheer for me?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H3402000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah, I'll watch.... Do your best.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
        }
    else {
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(2, "M2_01F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝!\nYou came to support us!");
        Voice_PlayVoice("H3402000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I heard that you were participating.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks, I'm so happy!");
        Character_BlinkStart(2, 2, (#1));
        Voice_PlayVoice("H3402000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Don't fall over and get injured.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I will be careful!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Shiba＊＊｝ came to cheer\nme on...\nAlright, I'll do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
