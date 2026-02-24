section "b04_m6_100"{
    int var0 = Date_GetDateOption(2, 30);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406100_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai. Can you skate or glide?");
            }
        else {
            Voice_PlayVoice("B0406100_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, can you skate or glide?");
            }
        Message_MsgSel("If it's skating, leave it to me!", "I'm alright at it.", "I'd like for you to teach me how to skate.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 4);
                Date_InData_Date(321, 1);
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                    Character_ChFace(1, 2, 0);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0406100_F00200", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Oh, really?\nThen let's glide together.");
                    Message_ResumeSkinship();
                    Message_SkinshipSet(1);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                    Message_SkinshipSet(0);
                    }
                else {
                    Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                    Character_ChFace(1, 2, 0);
                    Character_BlinkStart(6, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0406100_F00300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "... Oh, you don't say.\nThen come on, follow me!");
                    Message_ResumeSkinship();
                    Message_SkinshipSet(1);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                    Message_SkinshipSet(0);
                    }
                }
            else {
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Voice_PlayVoice("B0406100_F00400", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "So... Which is it?\nHow is that a decision, exactly...?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                    }
                else {
                    Voice_PlayVoice("B0406100_F00500", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "... That already sounds like a lie.\nYour feet are shaking, aren't they.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                    }
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406100_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Then please, follow me over there to\nget used to gliding.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406100_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well then follow me over there so\nyou can get the hang of gliding!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406100_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, it's fine. I'm good at skating.\nIt's one of my strong points.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406100_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That's fine.\nI'm good at skating since it's one\nof my strong points.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406100_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "How is my gliding?");
            }
        else {
            Voice_PlayVoice("B0406100_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, are you watching? My gliding!");
            }
        Message_MsgSel("It feels like you're a fairy on the ice.", "Yeah, a skilled expert!", "You still have a long way to go to be a pro.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406100_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Things like that aren't cute.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406100_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I don't feel like that expression\nshould be used for a man...\nWell, thanks anyway.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406100_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nI think that's a little too much\npraise...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406100_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Senpai, were you even looking?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 1);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406100_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "What did you say?\nWell then, I'll show you speed\nskating next time!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 1);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406100_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... What did you say?\nWell then, it's speed skating next\ntime!\nWatch me properly!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406100_F01800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Please take my hand.\nI want to glide backwards and look\nover my shoulder as I glide.");
            }
        else {
            Voice_PlayVoice("B0406100_F01900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, take my hand.\nI want to glide backwards and look\nover my shoulder as I glide.");
            }
        Message_MsgSel("Stop it, it seems dangerous.", "That's clever, ｛Amachi＊＊｝!", "It feels strange to stare at you this much.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406100_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So I can't glide with Senpai if I do\nit this way?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406100_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Now you're a worrywart.\nI'll be safe if you watch in front\nof us properly!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406100_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "This experience is from practice.\nAh, if you like, I can teach you the\nart?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406100_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "This experience is from practice.\nIf you improve, I can teach you the\nart.\nFirst, a leap...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406100_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "*Sighs*...\nWell then, I'll stop doing it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406100_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Well, then, I'll stop.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406100_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "D-Don't say weird things! ... Woah!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Waaah!!");
                SoundEffect_PlayStream(3, "SS_T_00_245_M00");
                Screen_StartShakePlane(0, 32, 32, 0, 16);
                System_Wait(92);
                Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406100_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai, are you all right?\nI'm sorry for dragging you down...\nBut it's your fault, Senpai!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, why?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406100_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "F-For saying those kind of things...\nAren't you more aware?!\nThings like that are prohibited now!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(*Giggles* ｛Amachi＊＊｝'s\nblushing deeply.)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
