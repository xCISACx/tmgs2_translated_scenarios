section "b04_m2_094"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Character_ChFace(0, 0, 9);
    Character_BlinkStart(2, 2, (#1));
    Background_Bg_GS2("BG_FP440_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_440_000", 127, 40);
    Voice_PlayVoice("B0402094_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Hey, this is...");
    Message_MsgSel("I have no idea what it is...", "I kind of get it, based on the feeling.", "You don't know what this is?");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0402094_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.\nIt might be a bad idea for us to\nforce ourselves to understand what\nit is.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0402094_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Really? ... Hey, is it a flower?\nNo... a camel......?");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0402094_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I have no idea.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
