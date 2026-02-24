section "b04_m2_095"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Background_Bg_GS2("BG_FP450_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_450_000", 127, 40);
    Voice_PlayVoice("B0402095_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Mihara Shiki.\nApparently, he's Habataki's genius\npainter.");
    Message_MsgSel("It's a really passionate image.", "This is a human, and this is a monkey.", "It's not Mihara Shiki!");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Message_PauseSkinship();
        Voice_PlayVoice("B0402095_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ah, I see. Passionate, huh.\nThis is expressing power, right?");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 0);
        Message_PauseSkinship();
        Voice_PlayVoice("B0402095_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Human... monkey......?\nYou're quite discriminatory.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0402095_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... You really think so?\nIt's embarrassing, so don't talk in\nsuch a loud voice.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
