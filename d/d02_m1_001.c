section "d02_m1_001"{
    Character_BlinkStart(1, 1, (#1), 1);
    Character_BlinkStart(1, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_WI_0", #1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_WI_0", #1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_WI_0", #1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_WI_0", #1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    SoundEffect_PlaySE(19, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Ah, who is it?)");
    SoundEffect_StopSE(19, 0);
    SoundEffect_PlaySE(20, 127);
    Voice_PlayVoice("FD_01_240_00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Hello? It's me. Can you talk now?\nIt won't take long.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Sure. What's up?");
    Voice_PlayVoice("FD_01_240_00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "I've been doing some thinking, and\nI've decided I will be going back to\nmy parents' house.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh!? But it's so sudden...");
    Voice_PlayVoice("FD_01_240_00200", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Sangosho has closed, and I can't\nthink of any reasons for me to stay\nhere.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Is that so...? When will you move?");
    Voice_PlayVoice("FD_01_240_00300", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Ah, this... No.\nIf I tell you, you'll probably come\nto see me off.\nIt'll be too hard to look at you.");
    Voice_PlayVoice("FD_01_240_00400", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "I have to prepare, so I'm going to\nhang up.\nStay healthy. And...");
    Voice_PlayVoice("FD_01_240_00500", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "It'd be great if things between you\nand home go well.\nI'll be supporting you.... Later.");
    SoundEffect_PlaySE(20, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(｛Saeki＊＊｝ is going far\naway...)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
