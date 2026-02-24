section "b04_m7_025"{
    Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
    Character_ChFace(0, 2, 3);
    Character_ChFace(0, 3, 5);
    Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0407024_G01700", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "... A trip on the boat sounds good.\nLet's go on the next boat.");
    Message_MsgSel("Do you like going on trips?", "Eh, is there somewhere else you'd like to go?", "I'll be the one yearning to travel!");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 35);
        Character_ChFace(1, 0, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407024_G01800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I wonder...\nif it could be called a trip.\nIt is still possible to settle down\nwhile walking around aimlessly.");
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
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("B0407024_G01900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Mmm... Sensei will pass.\nIt would seem very difficult to to\nretrieve a ticket.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 1:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(7, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407024_G02000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I cannot go anywhere right now,\nbecause my students are important to\nme.\nAren't you relieved?");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
