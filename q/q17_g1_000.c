section "q17_g1_000"{
    Character_ChFace(0, 0, 10);
    Character_Chara_GS2(10, "G1_01F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("Q0810000_J00000", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "Today was fun.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, I had fun too.");
    Character_ChFace(0, 0, 3);
    Voice_PlayVoice("Q0810000_J00100", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "Then...\nDo you want to visit places together\nthe day after tomorrow?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, let's do it!");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("Q0810000_J00200", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "Then wait for me here the morning of\nthe day after tomorrow.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay, I'm looking forward to it!");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
