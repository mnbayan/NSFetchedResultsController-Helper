//
//  NSFetchedResultsController+Helper.m
//
//  Created by Mylene Bayan on 9/5/14.
//

#import "NSFetchedResultsController+Helper.h"


@implementation NSFetchedResultsController (Helper)

-(NSUInteger) numberOfObjectsForSection: (NSUInteger) section {
    id <NSFetchedResultsSectionInfo> sectionInfo;
    sectionInfo = [self.sections objectAtIndex: section];
    return sectionInfo.numberOfObjects;
}


-(id) objectForRow: (NSUInteger) row inSection: (NSUInteger) section {
    NSIndexPath *indexPath = [NSIndexPath indexPathForRow:row inSection:section];
    return [self objectAtIndexPath: indexPath];
}

@end
