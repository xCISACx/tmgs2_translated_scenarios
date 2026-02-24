section "b04_m7_191"{
    int var0 = Date_GetDateOption(2, 61);
    Effect_OpenParticle(1);
    if (var0 == 0){
        Character_Chara_GS2(7, "M7_06F", 0, 1, 0);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0407191_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Autumn-colored leaves come when\nAutumn starts.\nI learned that without being\ntaught....\nNature is always honest.");
        Message_MsgSel("Autumn leaves are romantic.", "It's odd how they redden all together.", "Am I an honest person, too?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(7, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407191_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Romantic?\nWell, I feel a scientific romance in\nthe mechanism of Autumn leaves.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(7, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407191_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "The Autumn tint begins by\ntemperature change.\nSo the group that grows in the same\narea turns red almost\nsimultaneously.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0407191_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Self-appeal? Alright, I get it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else {
        Character_Chara_GS2(7, "M7_06F", 0, 1, 0);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0407191_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "The air is a little chilly.\nDo you go to the mountains in\nWinter?");
        Message_MsgSel("It became Autumn in a blink of an eye.", "It's a bit lonely.", "Winter is pleasing, too.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407191_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes.\nI enjoy spending time viewing the\ncherry blossoms and the Autumn\nleaves.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0407191_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Just a little sentimental...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407191_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Then I'll think of it again in\nWinter.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
