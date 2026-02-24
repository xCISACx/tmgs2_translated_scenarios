section "b04_m4_094"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Background_Bg_GS2("BG_FP440_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_440_000", 127, 40);
    Voice_PlayVoice("B0404094_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "... What's this? Is this art...?");
    Message_MsgSel("I don't think I have to understand it.", "They said he's a famous painter.", "It looks like it came out of a dream.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 0, 8);
        Voice_PlayVoice("B0404094_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nThe way you said it, it stings...\nAre you making fun of me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0404094_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hmm?\nOh yeah, I might have seen this on\nsome of my CDs.\nWho was it...?");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 4);
        Message_PauseSkinship();
        Voice_PlayVoice("B0404094_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Right...\nAnd yet, partly a nightmare...\nJust take a peek and let's quickly\nleave.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
