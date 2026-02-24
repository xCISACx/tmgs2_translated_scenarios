section "b04_m6_072"{
    int var0 = Date_GetDateOption(2, 20);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406072_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Spring feels nice.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406072_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ahh... Spring feels nice.");
            }
        Message_MsgSel("Look, there's a butterfly flying!", "It seems like napping here would be nice.", "We must be wary of UV Rays!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406072_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha.\nThe butterflies surely look forward\nto the coming of Spring.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406072_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A butterfly!\nYou say cute things, Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406072_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "An afternoon nap, huh.\nIt might be a good idea from time to\ntime.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406072_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "An afternoon nap, huh.\nIt might be a good idea, now and\nagain.");
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
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406072_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "If you are worried about that, then\nyou won't be able to go anywhere.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406072_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But you won't be able to go anywhere\nif you worry about that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406072_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah...\nI smell the sweet fragrance of\nflowers.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406072_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah... I smell flowers.\nIt's kinda sweet...");
            }
        Message_MsgSel("You have the smelling abilities of a bee!", "Like Spring, in all its glory.", "It kind of makes me hungry.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406072_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... No, it's normal.\nCan't you smell it, Senpai?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406072_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Why are you talking about bees?\nAh, is it because I'm small!?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406072_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Right.\nFor some reason, the air feels\ngentle.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406072_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Right. The air is also gentle.");
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
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406072_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Just now, hot cakes came to my head.\nLet's go and have tea somewhere.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406072_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Me too.\nHey, do you wanna go and eat hot\ncakes?");
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
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406072_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, there are a lot of grapeseed\nblossoms growing over there.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0406072_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Whoa...\nThat whole area over there is filled\nwith rapaseed blossoms.\nIt's all yellow!");
            }
        Message_MsgSel("I want to take a photo of me in there.", "Making tempura out of them would taste nice.", "You could make a wreath from them.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406072_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That is a good idea.\nLet's go, Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406072_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Nice idea! Let's go, Senpai!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406072_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Rapaseed blossom tempura...\nIt would perhaps be the taste of\nSpring.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406072_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Rapaseed blossom tempura...\nThey're bitter so I probably\nwouldn't like it, but it would have\nthe taste of Spring.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406072_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai...\nYou can make wreaths from other\nflowers.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406072_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "No.\nYou don't use rapaseed blossoms for\nwreaths.\nYou've never actually made one, have\nyou?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406072_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Wreaths...\nI've made small bouquets before, but\nnot wreaths.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is that so.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406072_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, in kindergarden.\nThen I gave it to my teacher.\nThinking about it now, that might\nhave been my first love...");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406072_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nThat would mean that perhaps I like\nolder people?");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406072_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "B-But that doesn't mean that you are\nmy t-type Senpai!");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406072_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Geez...\nWhat did you make me say, Senpai...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(What's wrong with\n｛Amachi＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
