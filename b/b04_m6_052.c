section "b04_m6_052"{
    if (System_GlobalWork(1, 1) == 0){
        Character_Chara_GS2(6, "M6_D?F", 0, 1, 0);
        Character_ChFace(0, 4, 1);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406052_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wow... It's beautiful!");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406052_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, look! It's beautiful...");
            }
        Message_MsgSel("The night sky is the fireworks' canvas!", "What are inside of the fireworks?", "It's loud.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 33);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406052_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes... It surely is.\nA wonderful work of art!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 33);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406052_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah!\nIt feels so pleasant when it's\ndepicted like this.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 33);
                Character_ChFace(1, 0, 3);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406052_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I was satisfied enough with just\nwatching...\nI hadn't though of that either.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 33);
                Character_ChFace(1, 0, 3);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406052_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm, I never thought of that.\nIt may be in how it sounds.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0406052_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Senpai wasn't happy...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 2, (#1), 1);
                Voice_PlayVoice("B0406052_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nDid you expect for it to be\nfireworks without hearing the\nsounds?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (System_GlobalWork(1, 1) == 1){
        Character_Chara_GS2(6, "M6_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406052_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The fireworks sparkle for a moment\nand then poof, disappears\ncompletely.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406052_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The fireworks go poof then scatters\nimmediately.");
            }
        Message_MsgSel("The sounds seem so distant and lonely.", "Isn't that smart?", "Our memories of the fireworks are forever.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 33);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406052_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes...\nEven so, that moment is beautiful, I\nlike it.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 33);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406052_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Even so, isn't it a moment to enjoy?\nTherefore, don't you think it's\nnice?");
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
                Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 33);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406052_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I think so too.\nBecause it disappears instantly,\nit's beautiful.\nUndoubtedly.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 33);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406052_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Oh, you understand!\nFor some reason, I find the quick\nmoment the fireworks disappears\nbeautiful.");
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
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 5);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406052_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well......\nPlease stop saying things like that,\nSenpai, it's embarrassing...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406052_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Hey, Senpai.\nIs that not embarrassing?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406052_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\n*Giggles* You don't seem like the\ntype to say things like that,\nSenpai.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406052_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... However.");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406052_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "There are more and more things I\nwant to do with Senpai, not just\nfireworks.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("B0406052_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But, it's unreasonable...");
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406052_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nTruthfully, I wonder why Senpai have\nto be a Senpai...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(5, 0, 1);
    }
