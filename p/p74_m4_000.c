section "p74_m4_000"{
    Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(What a relief...\nSomehow, it seems like it was a\nsuccess!)");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(4, "M4_17F", 0);
            Voice_PlayVoice("P8404000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "The people are really applauding\nyou!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝.\nHey, how was it?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P8404000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It was good stimulation.\nIt was a huge success!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was complimented by\n｛Hariya＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(I t-tripped.\nWhat a huge failure...)");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_17F", 0);
            Voice_PlayVoice("P8404000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That was some awesome trip!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝...");
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("P8404000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "As expected, that's how you\nnaturally are.\nIt's fine!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, how embarrassing...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(What a relief...\nSomehow, it seems like it was a\nsuccess!)");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.\nHow was it?");
            Voice_PlayVoice("P8404000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "The audience said the clothes were\naverage, but the way you walked was\nnice...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really? I'm glad...!");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P8404000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Then said that the model was also\npretty, so I told them you weren't a\nHanegasaki student.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What?! Why?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P8404000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "S...Shut up!");
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P8404000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Anyway! I'm glad it was a success.\nCongrats!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was complimented by\n｛Hariya＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... What a huge failure...)");
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("P8404000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hey.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝... Ah!\nDon't say anything!");
            Character_BlinkStart(4, 0, (#1));
            Voice_PlayVoice("P8404000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Okay. I'll be quiet.");
            Message_Who(0);
            Message_MsgDisp("主人公", "............\nI'm curious, after all, so will you\nsay it?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P8404000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It was obvious that you lacked\npractice.\nI also thought the dress was\nlacking.\nThere was nothing good about it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I should have tried harder.)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh, somehow, it seems like\nit was a success!)");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝! How was it?");
            Voice_PlayVoice("P8404000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm glad I came to you before the\nshow started.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_BlinkStart(4, 3, (#1));
            Voice_PlayVoice("P8404000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If I had seen it at the same time as\nthe other guys,");
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("P8404000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm sure I'd be very annoyed right\nnow.");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("P8404000_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nEven if I didn't see it at the same\ntime as them, I'd still be feeling\ndown.");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("P8404000_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... I'm saying that you were pretty!\nHurry up and change already!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was complimented by\n｛Hariya＊＊｝.\nI'm glad!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*...\nThat was a huge failure...)");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("P8404000_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝...\nI tripped...");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P8404000_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Amazingly, though!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8404000_D01800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It seems like you don't have any\ninjuries, so isn't it fine?\nThese things happen.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P8404000_D01900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Actually, I was relieved that you\nwere like yourself!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝...");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("P8404000_D02000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Let's go eat something yummy on the\nway home or something.\nI'll treat you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thanks, ｛Hariya＊＊｝.)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
