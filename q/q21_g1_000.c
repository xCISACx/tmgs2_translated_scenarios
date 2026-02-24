section "q21_g1_000"{
    SoundEffect_PlayStream(2, "SE_GAYA_MAKURA_FAR");
    Background_Bg_GS2("BG_SCB10_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(The boys' quarters sure is\nlively...)");
    Voice_PlayVoice("Q2110000_J00000", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "Aah, ｛主人公｝.");
    Character_ChFace(0, 0, 8);
    Character_Chara_GS2(10, "G1_08F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "What's going on\n｛Toudou＊＊｝?");
    Voice_PlayVoice("Q2110000_J00100", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "The boys are making a lot of noise.\nI was going to yell at them for\nbeing annoying.");
    Character_ChFace(0, 3, 0);
    Voice_PlayVoice("Q2110000_J00200", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "They're being childish and making\nnoise because of the trip.\nShall we go in together?");
    Message_MsgSel("Yeah, I'll go!", "No, I'll pass...");
    switch (Message_TextSelect()){
        case 0:
        Character_BlinkStart(10, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q2110000_J00300", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Very well.\nYou smack them while I complain.\nWell, let's go.");
        break ;
        case 1:
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(10, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("Q2110000_J00400", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Aren't you angry?\nThings like that are annoying.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(10, 3, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("Q2110000_J00500", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Whatever, I'll cancel my strategic\nplan.\nThe guys coming along is a hassle...\nI'm leaving, ｛主人公｝.");
        Character_Chara_GS2(10, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        System_GlobalWork(7, 2, 1);
        break ;
        }
    SoundEffect_StopStream(2, 40);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(10, 86, 1);
    }
