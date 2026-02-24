section "b04_m7_222"{
    Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
    Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0407222_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "The scenery is certainly wonderful.\nHowever...\nclimbing is hard to grasp.\nThis building is for powerful\npeople.");
    Message_MsgSel("I want to build a high building.", "It was built from money collected.", "That's because it's a castle.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407222_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "So, it's high and big.\nIts being for powerful people\ndoesn't change.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407222_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "So then, the castle can be built on\na weak person's sacrifice.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(7, 2, (#1), 1);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0407222_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... Right.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
