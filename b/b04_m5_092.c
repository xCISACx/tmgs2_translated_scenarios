section "b04_m5_092"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_FP420_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_420_000", 127, 40);
    Voice_PlayVoice("B0405092_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "The color changes depending on which\nangle you look at it from...\nHow pretty...");
    Message_MsgSel("It's like your face, ｛Chris＊＊｝.", "It looks of high quality.", "It's like your paintings.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0405092_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... Uhh...\nA face that changes color depending\non which angle you look at it from?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 2, 1);
        Character_BlinkStart(5, 3, (#1), 2);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0405092_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Right.\nI want to try making something like\nthis...");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 0, 3);
        Character_BlinkStart(5, 2, (#1), 2);
        Character_ChFace(1, 4, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0405092_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... I'm so happy. Thanks.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
