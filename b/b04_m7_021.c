section "b04_m7_021"{
    Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
    Character_ChFace(0, 2, 0);
    Character_ChFace(0, 3, 2);
    Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0407021_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Who would imagine that so many\npeople would be eating soft green\nice cream...");
    Message_MsgSel("It's clearly not powdered green tea.", "It's a popular soft kind of komatsuna.", "Did you know it was so popular?");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 5);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407021_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... Yes.\nWell, that would be quite the taste.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407021_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Indeed!\nLet's eat some immediately....\nAh, it dissolves for sure, right?");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0407021_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes, I know.\nOf course, even I knew that!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
