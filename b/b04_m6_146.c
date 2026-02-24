section "b04_m6_146"{
    int var0 = Date_GetDateOption(2, 41);
    Background_Bg_GS2("BG_NE270_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_100_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406146_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "T-That's the best!?\nWell, it sure was the scariest\none...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Voice_PlayVoice("B0406146_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Which part?\nReally, really, scary...!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406146_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "More or less, I guess...\nI got so terrified halfway through\nit that my memory of it is...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406146_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I don't care!\nI don't want to recall any of it!\nI-I won't be able to sleep if I try\nto remember it!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406146_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "How should I say this?\nIt's so scary that I rather not\nmention it, at all.\nI'm glad that it ended...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406146_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, yeah!\nI'm sure it's always going to be\ndull.\nLet's try not to come back here\nagain!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406146_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Why did I have to pay to get a scary\nmemory?...");
            }
        else {
            Voice_PlayVoice("B0406146_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Why did I have to pay to get a scary\nmemory?...");
            }
        Message_MsgSel("Because it reminds you of summer.", "I kinda thought it was fun...", "... Oh, a shadow is behind you.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406146_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I-I don't want that memory! ...\nOh, I'm sorry...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406146_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I don't want that memory!\nI'd gather everything in this world\nand throw it away!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 4);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406146_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "P-Please I beg of you, choose a\ndifferent partner to come with you\nnext time...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 4);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406146_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Do choose a different one.\nPlease, I beg of you.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 4);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406146_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Waaaah!! Please take it out! Hurry!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Voice_PlayVoice("B0406146_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Woah-!! N-No! Take it out quickly!\nTake it out quick, Senpai!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(6, 3, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406146_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "T-Today was obviously not a big\ndeal!");
            }
        else {
            Voice_PlayVoice("B0406146_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "T-Today was obviously not a big\ndeal!");
            }
        Message_MsgSel("But the school's story was scary.", "I guess, but I prefer a scarier one.", "You don't have to act tough.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406146_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "P-Please stop!\nI can't help but remember it!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406146_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, don't say it! I might recall it!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 9);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406146_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I-I guess so.\nIt's even more scary...\nHaha, hahaha.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_ChFace(0, 0, 3);
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406146_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I-I guess so.\nIt's even more scary...\nHaha, hahaha.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0406146_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I-I'm not trying to be tough!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406146_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I-I'm not trying to act tough!\nI-I really wasn't scared!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406146_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I-I'm not trying to act tough!\nI-I really wasn't scared!");
                Voice_PlayVoice("B0406146_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Don't act tough either, Senpai.\nYou should be a little scared!");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406146_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You act so calm...\nWhat's with that...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Even though things may appear that\nway, I am scared.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0406146_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh... Are you sure...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.\nThe school's stories and things like\nthat are scary.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406146_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Sorry....\nIt looks like I could have calmed\ndown a little more.");
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406146_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, it's obvious that Senpai got\nworried too...\nHaha...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...?)");
                }
            break ;
            }
        }
    }
