section "b04_m6_051"{
    int var0 = Date_GetDateOption(2, 13);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406051_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Even though it's called a sky\ngarden, having plants at the top of\na building is somewhat strange.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406051_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's kinda weird that there are\nplants at the top of a building.");
            }
        Message_MsgSel("It's like paradise, floating in the sky!", "It's a giant, 360 degree panorama!", "It's not actually in the sky!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406051_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, the key thing about this place\nis that it is in the sky.\nThe view is also nice.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406051_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha, a paradise?\nBut having a nice view is definitely\nan important point.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406051_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai... Were you listening to me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406051_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai... Were you even listening?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406051_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha, that's right.\nTrees cannot grow in the sky!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406051_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Right! Nice joke, Senpai!!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406051_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Because we are closer to the sky, I\nfeel that the sun's rays are\nstronger.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406051_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The sun is kinda dazzling.\nIs it because we're closer to the\nsky?");
            }
        Message_MsgSel("I feel the sun's blessing.", "I'm scared of getting sunburned...", "Isn't it just your imagination?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 11);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406051_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So people express it in that way!\nIt's my first time hearing it.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406051_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai...\nIsn't your way of expressing things\nold fashioned?");
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
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406051_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I also don't like dazzling things.\nLet's go to the shade of the trees\nover there.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406051_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really? I don't like it either!\nHey, let's go over to the shade over\nthere.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406051_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Right. Sorry...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Voice_PlayVoice("B0406051_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Right.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_D?F", 0, 1, 0);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0406051_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "There are quite a lot of couples...");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Character_Chara_GS2(6, "M6_D?F", 0, 1, 0);
            Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0406051_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "There are tons of couples here.");
            }
        Message_MsgSel("Sky dates are popular.", "Because this liberated feeling feels good.", "They want to have this place to themselves.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406051_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That's right.\nThe scenery here is nice, as well.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406051_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\nThe scenery is nice, and the wind\nalso feels nice.");
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
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406051_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, I feel cheery when I look at\nthe vast sky and clouds.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406051_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Isn't that a given for places where\nyou can see the vast sky?");
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
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406051_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh...\nBut there are a lot of people around\nas well.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406051_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "They couldn't do that, or anything\nelse with this many people around,\nright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406051_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, that's right...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406051_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "This scenery makes me want to keep\nit for just the two of us.\nJust mine, and yours...");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406051_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Kidding!\nGeez, I've also caught your dreamer\nsyndrome.");
                Character_ChFace(0, 0, 6);
                Voice_PlayVoice("B0406051_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Take responsibility for it, by being\nwith me a little longer!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
