section "l02_s1_000"{
    Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
    Character_Chara_GS2(14, "S1_04F", 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_C_14_000_D00", 127, 40);
    if ((Parameter_GetPl1Param(36) == 0) && (Parameter_GetPl1Param(37) == 0) && (Parameter_GetPl1Param(39) == 0)){
        Voice_PlayVoice("L0214000_N00400", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Morning, Sis～.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah. Good morning, Yuu-kun.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("L0214000_N00500", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "It's finally Valentine's Day.\nWere you okay in preparing\nchocolate?");
        Message_Who(0);
        Message_MsgDisp("主人公", ".........");
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("L0214000_N00600", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "I'm worried...\nBut you compete with your heart, not\nthis kind of thing.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah... right.");
        }
    else {
        if (Parameter_GetPl1Param(338) == 1){
            if (Parameter_GetPl1Param(39) == 1){
                Voice_PlayVoice("L0214000_N00000", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Morning, Sis～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah. Good morning, Yuu-kun.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("L0214000_N00100", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "It's finally Valentine's Day.\nDid you remember to bring the\nchocolate from yesterday?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Of course!\nThe wrapping is also perfect.");
                Character_BlinkStart(14, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("L0214000_N00200", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "I think that you'll definitely\ncommunicate your feelings, since you\ntried your very best to make it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "That would be nice...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("L0214000_N00300", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Just a little longer.\nPut your spirit into it!\nI also seem like I'll have to carry\na lot home...\nI'll see you later～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, spirit!)");
                }
            else {
                Voice_PlayVoice("L0214000_N00400", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Morning, Sis～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah. Good morning, Yuu-kun.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("L0214000_N00500", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "It's finally Valentine's Day.\nWere you okay in preparing\nchocolate?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Well, I went with the flow.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("L0214000_N00600", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "I'm worried...\nBut you compete with your heart, not\nthis kind of thing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah... right.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("L0214000_N00700", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Yeah. Put your spirit into it!\nI also seem like I'll have to carry\na lot home...\nI'll see you later～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, spirit!)");
                }
            }
        else if (Parameter_GetPl1Param(338) == 2){
            if (Parameter_GetPl1Param(39) == 1){
                Voice_PlayVoice("L0214000_N00800", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Morning!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah. Good morning, Yuu-kun.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("L0214000_N00900", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "It's finally Valentine's day.\nDid you remember to bring the\nchocolate from yesterday?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Of course! It's in my bag.");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(14, 2, (#1));
                Voice_PlayVoice("L0214000_N01000", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "It'd be nice if it communicated your\nfeelings, since it's made with lots\nof love.");
                Character_BlinkStart(14, 0, (#1));
                Voice_PlayVoice("L0214000_N01100", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Even I want to eat it.\nAnyway, I'm leaving now.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hahaha.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, I'll do my best today.)");
                }
            else {
                Voice_PlayVoice("L0214000_N01200", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Morning!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah. Good morning, Yuu-kun.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("L0214000_N01300", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "It's finally Valentine's day.\nDid you prepare chocolate?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Well, I went with the flow.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(14, 3, (#1));
                Voice_PlayVoice("L0214000_N01400", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Will this be okay...\nWell, you compete with your heart,\nnot this kind of thing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah... right.");
                Character_BlinkStart(14, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("L0214000_N01500", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Yes, it's a battle of spirit!\nEvery year I get over things with my\nspirit, even though I've eaten all\nthe chocolate.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("L0214000_N01600", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "So, do your best.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll be full of vigour today.)");
                }
            }
        else {
            if (Parameter_GetPl1Param(39) == 1){
                Voice_PlayVoice("L0214000_N01700", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Morning!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Morning, Yuu-kun.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("L0214000_N01800", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Valentine's is here, again.\nDid you bring the chocolate from\nyesterday?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Of course. Preparations are done.");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(14, 2, (#1));
                Voice_PlayVoice("L0214000_N01900", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "I think that since you made it so\nnicely, it will communicate your\nfeelings.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I wonder.");
                Character_BlinkStart(14, 0, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("L0214000_N02000", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Have confidence and give it to him!\nWell, if you don't, I'll eat it.\nI'm leaving now～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah. I'll do my very best today.)");
                }
            else {
                Voice_PlayVoice("L0214000_N02100", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Morning!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Morning, Yuu-kun.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("L0214000_N02200", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Valentine's is here again.\nHave you prepared chocolate?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Well, I went with the flow.");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(14, 3, (#1));
                Voice_PlayVoice("L0214000_N02300", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Yeah.\nHomemade chocolate doesn't mean\neverything.\nOnly if it's nice.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uh... That's sharp.");
                Character_BlinkStart(14, 2, (#1));
                Voice_PlayVoice("L0214000_N02400", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "I eat lots of chocolate every year.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("L0214000_N02500", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "But what's important is the heart.\nI've also brought a large bag this\nyear...\nNow then, I'm leaving.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah. I'll do my very best today.)");
                }
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(14, 86, 1);
    }
