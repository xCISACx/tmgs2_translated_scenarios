section "b04_m6_192"{
    int var0 = Date_GetDateOption(2, 62);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_10F", 0);
        Background_Bg_GS2("BG_TR121_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406192_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, do you have any skiing\nexperience?");
            }
        else {
            Voice_PlayVoice("B0406192_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Come to think of it...\nCan you glide on skiis, Senpai?");
            }
        Message_MsgSel("If it's skiing, leave it to me!", "I'm alright at it.", "I can't ski at all.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 4);
                Date_InData_Date(321, 1);
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_Chara_GS2(6, "M6_10F", 0, 1, 1, 35);
                    Character_BlinkStart(6, 3, (#1), 2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0406192_F00200", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "That seems to be okay.\nWell then, let's get going now.");
                    Message_ResumeSkinship();
                    Message_SkinshipSet(1);
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                    Message_SkinshipSet(0);
                    }
                else {
                    Character_Chara_GS2(6, "M6_10F", 0, 1, 1, 35);
                    Character_ChFace(1, 0, 10);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0406192_F00300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Oh really?\nSo do I have to be extra worried\nabout you?\nWell, let's go, at once!");
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
                if (Parameter_GetCh1Param(6, 130) <= 2){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("B0406192_F00400", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "...\nI'm sorry, but first of all, you're\nholding the stick upside down.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Argh Damn, I'm such an idiot!\nI made the worst impression.)");
                    }
                else {
                    Character_ChFace(0, 0, 8);
                    Character_BlinkStart(6, 3, (#1));
                    Voice_PlayVoice("B0406192_F00500", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "...\nYou're holding the stick upside\ndown.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Argh Damn, I'm such an idiot!\nI made the worst impression.)");
                    }
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_10F", 0, 1, 1, 35);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406192_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Are your snowplows good?\nThen let's go slowly for now.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_10F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 5);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406192_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Talk is cheap, isn't it?");
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
                Character_Chara_GS2(6, "M6_10F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406192_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well then, I'll teach you.\nWill you enjoy it once you can\nglide?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_10F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406192_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The point is, guts!\nIt's no use if you're afraid.\nI'll teach you, let's go slowly.");
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
        Character_Chara_GS2(6, "M6_10F", 0);
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR121_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406192_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I want to go to the advanced\ncourse...");
            }
        else {
            Voice_PlayVoice("B0406192_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I want to go to the advanced\ncourse...");
            }
        Message_MsgSel("I want to go with you, too!", "I want to look at what's below.", "Did you not go from beginner's course?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_10F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406192_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Would that be okay?\nIt seems unreasonable, but it's\nokay, I'll wait.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_10F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406192_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that really okay?\nThings like that make me uneasy...\nOh well.");
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
                Character_Chara_GS2(6, "M6_10F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406192_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really? Then I'll be back!\nPlease watch me glide!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_10F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406192_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Are you sure?\nThen, keep your eyes on my\nmagnificently perfect gliding and\nkeep it in your memory!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406192_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh...? Ah, yes...\nWell then, shall we go?...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression.)");
                }
            else {
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0406192_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nWell then, let's move to another\nline from here.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_10F", 0);
        Background_Bg_GS2("BG_TR121_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406192_F01800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Speaking of the ski area...");
            }
        else {
            Voice_PlayVoice("B0406192_F01900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Speaking of the ski area...");
            }
        Message_MsgSel("It's a test of courage by a straight descent!", "It's the start of love!", "The lodge's expensive ramen!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_10F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406192_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I did it with a friend in junior\nhigh and set a record.\nSo, do you want to have a go at it?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_10F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406192_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, do it, do it!\nI've never been defeated....\nDo you want to challenge me?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406192_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "This is a ski area.\nI came here to ski.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406192_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You know, this is a ski area, I came\nhere to ski.\nDo you get that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Voice_PlayVoice("B0406192_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The men and women seem to look very\nattractive on the ski slopes.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Do I look attractive, too?");
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406192_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Yeah. 30% more than usual.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ahaha, thank you.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406192_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", ".... Senpai. Umm...\nDon't carelessly forget to take your\ngoggles off in this area.\nAbsolutely not.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, why?");
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406192_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Do you want to keep the extra 30%?");
                Character_BlinkStart(6, 0, (#1));
                Voice_PlayVoice("B0406192_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I don't want to let other guys fall\nin love by watching, Senpai....\nTherefore, it's absolutely no good.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_10F", 0, 1, 1, 35);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406192_F02900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, it is expensive!\nIt's too cold, but I just eat it\nbecause my stomach gets empty.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_10F", 0, 1, 1, 35);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406192_F03000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It does seem expensive!\nI'm defeated by the cold, so I\ncarelessly eat it.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(3, 0, 1);
    System_GlobalWork(5, 0, 1);
    }
