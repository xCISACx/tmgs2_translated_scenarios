section "b04_m7_095"{
    Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
    Character_ChFace(0, 2, 4);
    Character_BlinkStart(7, 2, (#1));
    Character_ChFace(0, 3, 5);
    Background_Bg_GS2("BG_FP450_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_450_000", 127, 40);
    Voice_PlayVoice("B0407095_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "This...\nIt's all balanced out magnificently.");
    Message_MsgSel("Huh, this painting?", "Is it the balance of color?", "... Do you see the frame?");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1), 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("B0407095_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Not at all.\nThe talk is about the frame.\nI don't understand paintings very\nwell.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407095_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, if that's what it says.\nI was inadvertently only watching\nthe frame.");
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
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407095_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes, any frame has a golden ratio.\nThis one has a ratio of 1:1.62.\nA human being would recognize it as\n\"beautiful\".");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
