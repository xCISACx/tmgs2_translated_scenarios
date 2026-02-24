section "b04_m7_091"{
    Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
    Character_ChFace(0, 2, 3);
    Character_ChFace(0, 3, 0);
    Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
    Voice_PlayVoice("B0407091_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "A question from Sensei.\nWhy do they make the clay dolls in\nthat kind of form?");
    Message_MsgSel("The model is actually an alien!", "A sense of beauty at the time... I guess?", "Is it because it's an object of faith?");
    switch (Message_TextSelect()){
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 5);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407091_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, an on-the-spot answer.\nIs it correct?");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407091_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I see! You have studied well.\nSensei is happy he asked you.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        case 0:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("B0407091_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Incorrect, incorrect.\nWould you even fall for such a\nremark like that?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
