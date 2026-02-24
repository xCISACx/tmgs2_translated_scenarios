section "d01_mb_011"{
    Background_Bg_GS2("BG_EX200_CO_0", #1, #1, 0);
    if (System_GlobalWork(19, 1) == 16){
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh～* It's already this time.\nI should finish up soon.)");
        Character_Chara_GS2(26, "MB_02F", 0);
        Character_ChFace(0, 0, 6);
        Character_BlinkStart(26, 2, (#1));
        Music_PlayBGM(0, "MN_C_92_001_D00", 127, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "Tarou-kun...");
        Voice_PlayVoice("NS_92_000_16900", #1, "");
        Message_Who(26);
        Message_MsgDisp("Majima", "I was waiting for you to finish\nwork.");
        Message_Who(0);
        Message_MsgDisp("主人公", "......");
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("NS_92_000_17000", #1, "");
        Message_Who(26);
        Message_MsgDisp("Majima", "I know that you'll definitely hate\nme for doing this.\nBut the way things are...");
        Voice_PlayVoice("NS_92_000_17100", #1, "");
        Message_Who(26);
        Message_MsgDisp("Majima", "Please, will you listen to me, just\nthis once?");
        Message_MsgSel("......", "I don't want to hear it.");
        switch (Message_TextSelect()){
            case 0:
            Message_Who(0);
            Message_MsgDisp("主人公", "......");
            Character_BlinkStart(26, 3, (#1));
            Voice_PlayVoice("NS_92_000_17200", #1, "");
            Message_Who(26);
            Message_MsgDisp("Majima", "I'll come again later...");
            System_GlobalWork(19, 0, 18);
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "I don't want to hear it anymore.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(26, 3, (#1), 1);
            Voice_PlayVoice("NS_92_000_17201", #1, "");
            Message_Who(26);
            Message_MsgDisp("Majima", "I see... Goodbye.");
            System_GlobalWork(19, 0, 30);
            break ;
            }
        }
    else {
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh～* It's already this late.\nI should finish up soon.)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(!?\nWas that Tarou-kun who just walked\nby the window...)");
        Message_MsgSel("Chase after him.", "It was just my imagination.");
        switch (Message_TextSelect()){
            case 0:
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(26, "NON");
            Background_Bg_GS2("BG_NE100_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I lost him.\nBut if I don't see him now then...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(!! That's him...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "Tarou-kun!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Background_Bg_GS2("BG_HO000_?_2", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I lost sight of him.\nI probably won't see him, again...)");
            System_GlobalWork(19, 0, 19);
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "(It's just my imagination...\nI should hurry up and forget him.)");
            System_GlobalWork(19, 0, 30);
            break ;
            }
        }
    Music_StopBGM(0, 40);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
