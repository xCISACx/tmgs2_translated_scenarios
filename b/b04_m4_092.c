section "b04_m4_092"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Character_ChFace(0, 2, 3);
    Character_ChFace(0, 3, 0);
    Background_Bg_GS2("BG_FP420_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_420_000", 127, 40);
    Voice_PlayVoice("B0404092_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "It's sparkling all around here.");
    Message_MsgSel("I'm nervous because of the pricey things.", "I prefer the simple stuff.", "At this point, it's not quite there yet...");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0404092_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It's scary indeed...\nBe careful, because you're a klutz,\nokay?");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 0);
        Message_PauseSkinship();
        Voice_PlayVoice("B0404092_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I prefer bold, but...\nThis is a bit different.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0404092_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "What's \"not quite there\"?\nIf you're curious, don't stop\nmidway.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
