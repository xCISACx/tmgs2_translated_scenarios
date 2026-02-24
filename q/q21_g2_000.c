section "q21_g2_000"{
    SoundEffect_PlayStream(2, "SE_GAYA_MAKURA_FAR");
    Background_Bg_GS2("BG_SCB10_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(I wonder what that commotion might\nbe.\nSounds like the boys' quarters...)");
    Voice_PlayVoice("Q2111000_K00000", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "What is that big commotion!?");
    Character_ChFace(0, 0, 8);
    Character_Chara_GS2(11, "G2_08F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.\nWhat's going on?");
    Voice_PlayVoice("Q2111000_K00100", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "You hear it over there too?\nThere is an uproar in the boys'\nquarters.\nIt is troubling the other guests!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes, I wonder what's going on.\nIt seems fun, somehow.");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(11, 2, (#1));
    Voice_PlayVoice("Q2111000_K00200", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "Yes. It does sound like fun....\nBut it isn't!\nIt puts the quality of the entire\nschool in doubt!");
    Character_ChFace(0, 0, 8);
    Character_BlinkStart(11, 2, (#1));
    Character_ChFace(0, 4, 1);
    Voice_PlayVoice("Q2111000_K00300", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "Honestly...\nDo you want to come with me?\nTo see the state it is in...\nOr perhaps I should say, be careful\nif we go!");
    Message_MsgSel("I'll go!", "I'll pass...");
    switch (Message_TextSelect()){
        case 0:
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(11, 3, (#1));
        Voice_PlayVoice("Q2111000_K00400", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Then, let's go!");
        break ;
        case 1:
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("Q2111000_K00500", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Ehh? You do not want to go? ...\nI see. Then I will pass as well.");
        Character_Chara_GS2(11, "NON");
        System_GlobalWork(7, 2, 1);
        break ;
        }
    SoundEffect_StopStream(2, 40);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(11, 86, 1);
    }
