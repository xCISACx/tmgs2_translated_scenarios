section "q14_g1_000"{
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(10);
    Message_MsgDisp("？？？", "｛主人公｝.");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(10, "G1_01F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "Aah, ｛Toudou＊＊｝.");
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("Q0510000_J00100", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "I was waiting for you.");
    Message_Who(0);
    Message_MsgDisp("主人公", "What's up?");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("Q0510000_J00200", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "Do you want to spend our free time\ntogether?");
    Message_MsgSel("Yeah, I'll go! I'll go!", "Well... I'm sorry.");
    switch (Message_TextSelect()){
        case 0:
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(10, 2, (#1));
        Voice_PlayVoice("Q0510000_J00300", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Well then, let's go.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_GlobalWork(0, 2, 1);
        System_GlobalWork(2, 2, 10);
        System_Call_GS2("Q16", "G1", 0);
        System_Call_GS2("Q17", "G1", 0);
        break ;
        case 1:
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("Q0510000_J00400", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Well then, it's okay. I'll go alone.\nSee you later.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay.\nSorry, ｛Toudou＊＊｝...");
        Character_Chara_GS2(10, "NON");
        System_GlobalWork(3, 0, 1);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(10, 86, 1);
    }
