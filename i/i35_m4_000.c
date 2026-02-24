section "i35_m4_000"{
    Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(4, "M4_??F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(4, 130) <= 2){
        Voice_PlayVoice("I3504000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Thought it was you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh, ｛Hariya＊＊｝.\nWhat's up?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I3504000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I was just passing by.\nDon't steal any food, okay?");
        Character_Chara_GS2(4, "NON");
        }
    else if (Parameter_GetCh1Param(4, 130) == 3){
        Voice_PlayVoice("I3504000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yo.... Ah, are you window shopping?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("I3504000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "As If I'd come here to do that.\nYou got any Japanese sweets here?");
        Message_Who(0);
        Message_MsgDisp("主人公", "We don't have any, we're a Western\nconfectionary store.");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("I3504000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh yeah...");
        Message_Who(0);
        Message_MsgDisp("主人公", "So you were window shopping, after\nall!?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(4, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I3504000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hahaha, later!");
        Character_Chara_GS2(4, "NON");
        }
    else {
        Voice_PlayVoice("I3504000_D00600", 4, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yo.\nHave you decided what you're going\nto buy?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("I3504000_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nTwo of Anastasia's top selling\nspecial cream puffs.\nI'll give you one.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is that okay?");
        Character_ChFace(0, 0, 6);
        Character_BlinkStart(4, 3, (#1));
        Voice_PlayVoice("I3504000_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah....\nIn memory of me being able to see\nyou in an apron.\nIt's very cute...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Character_ChFace(0, 0, 8);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I3504000_D00900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Anyway! Two cream puffs!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, yes! Thank you very much!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
