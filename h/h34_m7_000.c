section "h34_m7_000"{
    if (Parameter_GetCh1Param(7, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best at today's\npractice contest!)");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_17F", 0);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3407000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "You're quite enthusiastic.\nCan I expect you to do well?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, please leave it to me!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I will do my best.)");
        }
    else if (Parameter_GetCh1Param(7, 130) <= 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best at today's\npractice contest!)");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_17F", 0);
        Voice_PlayVoice("H3407000_G00100", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3407000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "You are quite pumped up.\nYou seem like Acala today.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 3, (#1));
        Voice_PlayVoice("H3407000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Don't worry, I am not talking about\nyour face.\nI mean that it feels like your body\nis on fire.");
        Message_Who(0);
        Message_MsgDisp("主人公", "*Sigh*... That is okay.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like my stiff shoulders\nare more relaxed....\nI think I can aim for a good\nposition.)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best at today's\npractice contest!)");
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(7, "M7_17F", 0);
        Voice_PlayVoice("", 7, "H3407000_G00400");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.\nHow are you feeling?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nYes, I am the same as always.");
        Voice_PlayVoice("H3407000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That is good.\nIt seems like you are well-adjusted.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3407000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It will be fine if you run how you\nnormally run.\nIf you are a little more wild, you\nwill be able to reduce your best\ntime, right?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("", 7, "H3407000_G00700");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝, go with\nconfidence.\nI will be supporting you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I will go!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ came to cheer\nme on...\nYeah, my blood is pumping!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
